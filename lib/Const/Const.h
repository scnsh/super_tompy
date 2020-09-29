#ifndef _H_CONST_
#define _H_CONST_

#include <Arduino.h>
#include <AnimationServo.h>

namespace Music
{
<<<<<<< HEAD
    enum Track 
    {
        MainSound=1,       // 演奏曲
        RiffSound=2,       // 瓦割る準備をしている時の曲
        ApplauseSound1=3,  // 試技1回目の後の歓声
        ApplauseSound2=4,  // 試技2回目の後の歓声
        AncolSound=5,      // アンコール(試技2回目の開始で流れる)
    };

    constexpr int beat_len = 16;
    constexpr int beatInterval = (60. / 560) * 1000;  // 560 bpm and 107ms 
    // int beatInterval = (60. / 120.) / 4. * 1000; // 120 bpm -> 2 beat / 1sec -> 500msec / 4つ打ち (500 / 4) = 125
    // int beatInterval = (60. / 85.) / 4. * 1000;  // 85 bpm 
    // int beatInterval = (60. / 81.4) / 4. * 1000; // 81.4 bpm 
    // int beatInterval = (60. / 60.) / 4. * 1000;  // 60 bpm
    // int beatInterval = (60. / 150.) / 4. * 1000;  // 60 bpm
    // int beatInterval = (60. / 75.) / 4. * 1000;  // 60 bpm
    // int beatInterval = (60. / 30.) / 4. * 1000;  // 30 bpm

    namespace Main{
        constexpr int pattern_num = 23;
        constexpr int pattern_len = 27;
        constexpr int pattern_len_for_1 = 2;
=======
    constexpr int beat_len = 16;
    constexpr int pattern_num = 23;
    constexpr int pattern_len = 27;
    constexpr int pattern_len_for_1 = 2;
>>>>>>> update music data and add chord servo

        // uint8_t patterns[pattern_len] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1};
        // uint8_t patterns[pattern_len] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        constexpr uint8_t patterns[pattern_len] = {0, 1, 2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 14, 16, 17, 18, 19, 20, 21, 18, 22};
        // constexpr uint8_t patterns[pattern_len_for_1] = {0, 1}; // 1のみ繰り返し再生
        // constexpr uint8_t patterns[pattern_len] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
<<<<<<< HEAD
    }

    namespace Riff{
        constexpr int pattern_num = 2;
        constexpr int pattern_len = 30;
        constexpr uint8_t patterns[pattern_len] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    }

=======

        constexpr int beatInterval = (60. / 560) * 1000;  // 560 bpm and 107ms 
        // int beatInterval = (60. / 120.) / 4. * 1000; // 120 bpm -> 2 beat / 1sec -> 500msec / 4つ打ち (500 / 4) = 125
        // int beatInterval = (60. / 85.) / 4. * 1000;  // 85 bpm 
        // int beatInterval = (60. / 81.4) / 4. * 1000; // 81.4 bpm 
        // int beatInterval = (60. / 60.) / 4. * 1000;  // 60 bpm
        // int beatInterval = (60. / 150.) / 4. * 1000;  // 60 bpm
        // int beatInterval = (60. / 75.) / 4. * 1000;  // 60 bpm
        // int beatInterval = (60. / 30.) / 4. * 1000;  // 30 bpm
>>>>>>> update music data and add chord servo

    namespace Chord
    {
        enum Pin
        {
            SIGMA_HAND_L = 9, // ギター
            MAGMA_HAND_L = 11, // ベース
            NUM = 2
        };

<<<<<<< HEAD
       constexpr uint8_t main_beat[Main::pattern_num][Pin::NUM][beat_len]
=======
       constexpr uint8_t beat[pattern_num][Pin::NUM][beat_len]
>>>>>>> update music data and add chord servo
        = {{ //0 : 0
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  // ChordServo
        },{ //1, 3: 1
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
            {0, 0, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1}  // ChordServo
        },{ //2, 4: 2
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
            {0, 0, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1}  // ChordServo
        },{ //5: 3 
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  // ChordServo
        },{ //6: 4
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, // ChordServo
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, // ChordServo
        },{ //7: 5
            {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}, // ChordServo
            {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}, // ChordServo
        },{ //8: 6
            {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, 0}, // ChordServo
            {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, 0}, // ChordServo
        },{ //9: 7
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
        },{ //10: 8
            {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2}, // ChordServo
            {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2}, // ChordServo
        },{ //11: 9
            {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, // ChordServo
            {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, // ChordServo
        },{ //12: 10
            {2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3}, // ChordServo
            {2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3}, // ChordServo
        },{ //13: 11
            {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2}, // ChordServo
            {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2}, // ChordServo
        },{ //14: 12
            {2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0}, // ChordServo
            {2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0}, // ChordServo
        },{ //15: 13
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2}, // ChordServo
        },{ //16,18: 14
            {3, 3, 3, 3, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1}, // ChordServo
            {3, 3, 3, 3, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1}, // ChordServo
        },{ //17: 15
            {2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3}, // ChordServo
            {2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3}, // ChordServo
        },{ //19: 16
            {2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 2, 2, 1, 1}, // ChordServo
            {2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 2, 2, 1, 1}, // ChordServo
        },{ //20: 17
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1}, // ChordServo
        },{ //21, 25: 18
            {2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1}, // ChordServo
            {2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1}, // ChordServo
        },{ //22: 19
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1}, // ChordServo
        },{ //23: 20
            {2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
        },{ //24: 21
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
        },{ //26: 22
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
        }};

<<<<<<< HEAD
        constexpr uint8_t getMainBeat(int patternIndex, int servo_index, int beat_index){
            return main_beat[Main::patterns[patternIndex]][servo_index][beat_index];
        }    

       constexpr uint8_t riff_beat[Riff::pattern_num][Pin::NUM][beat_len]
        = {{ //0 
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1}  // ChordServo
        },{ //1
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // ChordServo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1}  // ChordServo
        }};

        constexpr uint8_t getRiffBeat(int patternIndex, int servo_index, int beat_index){
            return riff_beat[Riff::patterns[patternIndex]][servo_index][beat_index];
=======
        constexpr uint8_t getBeat(int patternIndex, int servo_index, int beat_index){
            return beat[patterns[patternIndex]][servo_index][beat_index];
>>>>>>> update music data and add chord servo
        }    
    }

    namespace Swing
    {
        enum Pin
        {
            DOGMA_HAND_R = 1, // スネア(瓦)
            DOGMA_HAND_L = 3, // スネア
            DOGMA_FOOT_R = 5, // バスドラ
            DOGMA_FOOT_L = 7, // ハイハット
            SIGMA_HAND_R = 8, // ギター
            MAGMA_HAND_R = 10, // ベース
            NUM = 6
        };

<<<<<<< HEAD
        constexpr uint8_t main_beat[Main::pattern_num][Pin::NUM][beat_len]
=======
        constexpr uint8_t beat[pattern_num][Pin::NUM][beat_len]
>>>>>>> update music data and add chord servo
        = {{ //0 : 0
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0},
            {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
<<<<<<< HEAD
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
=======
>>>>>>> update music data and add chord servo
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
        },{ //1, 3: 1
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //2, 4: 2
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //5: 3 
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //6: 4
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //7: 5
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //8: 6
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0},
        },{ //9: 7
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        },{ //10: 8
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        },{ //11: 9
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        },{ //12: 10
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0},
        },{ //13: 11
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        },{ //14: 12
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
        },{ //15: 13
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        },{ //16,18: 14
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //17: 15
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //19: 16
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //20: 17
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //21, 25: 18
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //22: 19
            {0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        },{ //23: 20
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        },{ //24: 21
            {0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        },{ //26: 22
            {0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        }};

<<<<<<< HEAD
        constexpr uint8_t getMainBeat(int patternIndex, int servo_index, int beat_index){
            return main_beat[Main::patterns[patternIndex]][servo_index][beat_index];
        }    

        constexpr uint8_t riff_beat[Riff::pattern_num][Pin::NUM][beat_len]
        = {{ //0
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0}
        },{ //1
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0}
        }};

        constexpr uint8_t getRiffBeat(int patternIndex, int servo_index, int beat_index){
            return riff_beat[Riff::patterns[patternIndex]][servo_index][beat_index];
=======
        constexpr uint8_t getBeat(int patternIndex, int servo_index, int beat_index){
            return beat[patterns[patternIndex]][servo_index][beat_index];
>>>>>>> update music data and add chord servo
        }    
    }
}


namespace Anim
{
    enum Pin
    {
        DOGMA_HEAD_PITCH = 0, 
        DOGMA_HEAD_ROLL = 2, 
        SIGMA_HEAD_PITCH = 4, 
        SIGMA_HEAD_ROLL = 6, 
        NUM = 4
    };
    constexpr int keyframe_len = 8;

    constexpr int dram_roll_len = 9;
    constexpr int vocal_pitch_len = 9;
    constexpr int vocal_roll_len = 9;

    KeyFrame keyframes[keyframe_len]
     = { 
         {110, 200}, 
         {90, 200}, 
         {110, 200}, 
         {90, 200}, 
         {120, 100}, 
         {90, 100}, 
         {120, 100}, 
         {90, 100}};

    // == 頭大きく振る
    // pitch 80(頭引く) ~ 145(頭下げる)
    
    constexpr int dram_pitch_len = 83;

    constexpr int front_head_duration = 170;
    constexpr int back_head_duration = 230;

    constexpr int low_front_head_angle= 115;
    constexpr int low_back_head_angle= 140;

    constexpr int low_front_head_duration = 170;
    constexpr int low_back_head_duration = 230;
    KeyFrame neck_pitch_frames[dram_pitch_len] = { 
        {90, 200}, 
        {110, 100}, 
        {120, 120},//  
        {80, 100}, 
        {90, 150},// 
        {110, 100}, 
        {120, 120},// 
        {80, 100},
        {90, 150},//
        {110, 100}, 
        {115, 100}, 
        {120, 200},// 
        {70, 100}, 
        {75, 100}, 
        {80, 250},// 
        {140, 100}, //大きく降る
        {145, 100}, //大きく降る
        {135, 150}, 
        {110, 150}, //頭戻す
        {100, 300}, 
        {120, 150}, // ここまでで2940
        {80, 160},
        {90, back_head_duration - 160}, 
        {115, 120}, 
        {125, front_head_duration - 120}, 
        {90, 160}, // ワンサイクル 
        {100, back_head_duration - 160}, // ワンサイクル 
        {115, 120}, 
        {120, front_head_duration - 120}, 
        {80, 160}, // ワンサイクル 
        {90, back_head_duration -160}, 
        {115, 120}, 
        {125, front_head_duration - 120}, 
        {90, 160}, // ワンサイクル 
        {100, back_head_duration - 160}, // ワンサイクル 
        {115, 120}, 
        {120, front_head_duration - 120}, 
        {80, 160}, // ワンサイクル 
        {90, back_head_duration - 160}, 
        {115, 120}, 
        {125, front_head_duration -120}, // ここまでで5500
        {100, 150}, 
        {90, back_head_duration}, 
        {135, 200}, //大きく降る
        {120, 150}, // ここまで6230
        {100,back_head_duration}, // ワンサイクル 
        {120, front_head_duration}, 
        {90, back_head_duration}, 
        {125, front_head_duration}, 
        {100, back_head_duration}, // ワンサイクル
        {120, front_head_duration}, 
        {90, back_head_duration}, 
        {125, front_head_duration}, 
        {100, back_head_duration}, // ワンサイクル
        {120, front_head_duration}, 
        {90, back_head_duration}, 
        {125, front_head_duration}, 
        {100, back_head_duration}, // ワンサイクル // ここまで8860
        {low_back_head_angle, low_back_head_duration}, // 下向きパート
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, 
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, 
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, 
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, 
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, 
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, // 下向きパート
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, 
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, 
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, 
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, 
        {low_front_head_angle, low_front_head_duration}, 
        {low_back_head_angle, low_back_head_duration}, 
        {low_front_head_angle, low_front_head_duration}, 
        {low_front_head_angle, 5000}, 
        }; 

    // roll 85(右) ~ 120(左)
    KeyFrame neck_roll_frames[dram_roll_len] = { 
        {100, 55000}, 
        {115, 220} , 
        {90, 250}, 
        {115, 220}, 
        {90, 250}, 
        {115, 220} , 
        {90, 250}, 
        {100, 200}, 
        {100, 200}, 
        // {100, 220} , 
        // {100, 250}, 
        // {100, 220}, 
        // {100, 250}, 
        // {100, 220} , 
        // {100, 250}, 
        // {100, 200}, 
        // {100, 200}, 
        // {100, 5000}, 
        }; 

    float map(int value, float start1, float stop1, float start2, float stop2)
    {
        return start2 + (stop2 - start2) * ((value - start1) / (stop1 - start1));
    }
}


#endif // _H_CONST_