	.align 2
voicegroup200:: @ 8F00000 Custom Voicegroup (Output Device Base Note, Duty Cycle, Atk, Dec, Sus, Rel)
	voice_keysplit voicegroup005, KeySplitTable1  @ 0
	voice_keysplit voicegroup005, KeySplitTable1  @ 1
	voice_directsound 60, 0, DirectSoundWaveData_steinway_b_piano, 255, 245, 0, 210  @ 2
	voice_keysplit voicegroup005, KeySplitTable1  @ 3
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 249, 0, 188  @ 4
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 255, 249, 0, 165  @ 5
	voice_directsound 60, 0, Cry_Paras, 255, 248, 0, 165  @ 6
	voice_directsound 60, 0, Cry_Paras, 255, 248, 0, 165  @ 7
	voice_directsound 60, 0, Cry_Paras, 255, 210, 51, 216  @ 8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 204, 51, 188  @ 9
	voice_directsound 60, 0, DirectSoundWaveData_heart_of_asia_gamelan, 255, 246, 25, 127  @ 10
	voice_directsound 60, 0, Cry_Paras, 255, 241, 0, 216  @ 11
	voice_directsound 60, 0, Cry_Paras, 255, 235, 0, 188  @ 12
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 13
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 249, 0, 127  @ 14
	voice_keysplit voicegroup005, KeySplitTable1  @ 15
	voice_directsound 60, 0, Cry_Paras, 255, 100, 232, 127  @ 16
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 127, 249, 165  @ 17
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 18
	voice_directsound 60, 0, DirectSoundWaveData_unknown_church_organ, 255, 0, 255, 142  @ 19
	voice_directsound 60, 0, DirectSoundWaveData_emu_ii_pipe_organ, 255, 0, 255, 188  @ 20
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 100, 250, 200, 165  @ 21
	voice_directsound 60, 0, Cry_Paras, 128, 0, 255, 165  @ 22
	voice_directsound 60, 0, Cry_Paras, 255, 253, 128, 127  @ 23
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 24
	voice_directsound 60, 0, Cry_Paras, 255, 249, 25, 204  @ 25
	voice_directsound 60, 0, Cry_Paras, 255, 235, 25, 188  @ 26
	voice_directsound 60, 0, Cry_Paras, 255, 249, 25, 127  @ 27
	voice_directsound 60, 0, Cry_Paras, 255, 0, 255, 127  @ 28
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 250, 180, 188  @ 29
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 250, 180, 188  @ 30
	voice_directsound 60, 0, DirectSoundWaveData_sd90_special_scream_drive, 255, 0, 255, 127  @ 31
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 149  @ 32
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 33
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 128, 149  @ 34
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 35
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 115  @ 36
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 0, 255, 188  @ 37
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 38
	voice_directsound 60, 0, Cry_Paras, 255, 253, 25, 165  @ 39
	voice_directsound 60, 0, DirectSoundWaveData_pokepinball_violin, 128, 240, 180, 204  @ 40
	voice_directsound 60, 0, Cry_Paras, 255, 0, 255, 165  @ 41
	voice_square_2_alt 1, 0, 3, 8, 1  @ 42
	voice_directsound 60, 0, DirectSoundWaveData_sc88_wind, 255, 0, 232, 127  @ 43
	voice_directsound 60, 0, DirectSoundWaveData_sc88_string_ensemble_72, 48, 250, 255, 165  @ 44
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 252, 0, 204  @ 45
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 249, 0, 210  @ 46
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 204  @ 47
	voice_keysplit voicegroup006, KeySplitTable2  @ 48
	voice_directsound 60, 0, DirectSoundWaveData_sc88_string_ensemble_60, 255, 250, 206, 188  @ 49
	voice_directsound 60, 0, DirectSoundWaveData_sc88_string_ensemble_84, 192, 0, 255, 188  @ 50
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 226, 0, 188  @ 51
	voice_directsound 60, 0, Cry_Paras, 100, 240, 200, 165  @ 52
	voice_directsound 60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 100, 0, 255, 188  @ 53
	voice_directsound 60, 0, DirectSoundWaveData_sc88_bubbles, 255, 0, 255, 127  @ 54
	voice_directsound 60, 0, Cry_Paras, 255, 232, 185, 188  @ 55
	voice_keysplit voicegroup007, KeySplitTable3  @ 56
	voice_keysplit voicegroup007, KeySplitTable5  @ 57
	voice_keysplit voicegroup008, KeySplitTable4  @ 58
	voice_directsound 60, 0, DirectSoundWaveData_sc88_trumpet_72, 255, 232, 185, 188  @ 59
	voice_keysplit voicegroup009, KeySplitTable5  @ 60
	voice_directsound 60, 0, Cry_Paras, 255, 0, 255, 127  @ 61
	voice_directsound 60, 0, Cry_Paras, 255, 0, 255, 127  @ 62
	voice_directsound 60, 0, DirectSoundWaveData_sc88_french_horn_60, 255, 0, 224, 165  @ 63
	voice_directsound 60, 0, DirectSoundWaveData_sc88_french_horn_72, 255, 0, 255, 165  @ 64
	voice_directsound 60, 0, Cry_Paras, 255, 0, 255, 165  @ 65
	voice_directsound 60, 0, Cry_Paras, 255, 240, 180, 165  @ 66
	voice_directsound 60, 0, DirectSoundWaveData_unknown_trombone_39, 248, 127, 255, 165  @ 67
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_oboe, 64, 0, 255, 127  @ 68
	voice_directsound 60, 0, DirectSoundWaveData_sc88_trumpet_84, 255, 0, 255, 127  @ 69
	voice_directsound 60, 0, Cry_Paras, 255, 127, 231, 127  @ 70
	voice_directsound 60, 0, DirectSoundWaveData_unused_sd90_oboe, 255, 127, 231, 165  @ 71
	voice_directsound 60, 0, Cry_Paras, 255, 0, 255, 165  @ 72
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 231, 192, 165  @ 73
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_shakuhachi, 64, 176, 240, 196  @ 74
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_shakuhachi, 255, 0, 255, 165  @ 75
	voice_directsound 60, 0, DirectSoundWaveData_sd90_enhanced_delay_shaku, 255, 0, 255, 165  @ 76
	voice_directsound 60, 0, Cry_Paras, 128, 165, 232, 204  @ 77
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 128, 165, 165, 165  @ 78
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 240, 255, 204  @ 79
	voice_square_2_alt 2, 0, 2, 7, 1  @ 80
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 81
	voice_square_2_alt 1, 0, 2, 7, 1  @ 82
	voice_square_1_alt 0, 3, 0, 2, 7, 1  @ 83
	voice_square_2_alt 0, 0, 2, 7, 1  @ 84
	voice_square_1_alt 0, 0, 0, 2, 7, 1  @ 85
	voice_square_2_alt 3, 0, 2, 7, 1  @ 86
	voice_square_1_alt 0, 2, 0, 2, 7, 1  @ 87
	voice_square_1_alt 0, 1, 0, 2, 7, 1  @ 88
	voice_square_1 0, 2, 0, 0, 15, 0  @ 89
	voice_directsound 60, 0, DirectSoundWaveData_unknown_polysynth, 255, 232, 154, 165  @ 90
	voice_square_1 0, 2, 0, 0, 15, 0  @ 91
	voice_square_1 0, 2, 0, 0, 15, 0  @ 92
	voice_square_1 0, 2, 0, 0, 15, 0  @ 93
	voice_square_1 0, 2, 0, 0, 15, 0  @ 94
	voice_square_1 0, 2, 0, 0, 15, 0  @ 95
	voice_square_1 0, 2, 0, 0, 15, 0  @ 96
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 0, 15, 1  @ 97
	voice_square_1 0, 2, 0, 0, 15, 0  @ 98
	voice_square_1 0, 2, 0, 0, 15, 0  @ 99
	voice_square_1 0, 2, 0, 0, 15, 0  @ 100
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 0, 15, 0  @ 101
	voice_square_1_alt 0, 2, 0, 0, 7, 1  @ 102
	voice_square_2_alt 2, 0, 0, 7, 1  @ 103
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_low, 255, 0, 255, 127  @ 104
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_high, 255, 0, 255, 127  @ 105
	voice_square_1 0, 2, 0, 0, 15, 0  @ 106
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 0  @ 107
	voice_directsound 60, 0, Cry_Paras, 255, 235, 0, 165  @ 108
	voice_square_1_alt 0, 1, 0, 0, 7, 1  @ 109
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 12, 1  @ 110
	voice_square_1 0, 2, 0, 0, 15, 0  @ 111
	voice_square_2_alt 0, 0, 0, 7, 1  @ 112
	voice_square_1_alt 0, 3, 0, 0, 7, 1  @ 113
	voice_square_1 0, 2, 0, 0, 15, 0  @ 114
	voice_square_1_alt 0, 2, 0, 0, 7, 1  @ 115
	voice_square_2_alt 2, 0, 0, 7, 1  @ 116
	voice_square_2_alt 2, 0, 5, 0, 1  @ 117
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 0, 15, 0  @ 118
	voice_directsound 60, 0, DirectSoundWaveData_sc88_orchestra_cymbal_crash, 8, 0, 255, 216  @ 119
	voice_square_2_alt 1, 0, 0, 7, 1  @ 120
	voice_square_1 0, 2, 0, 0, 15, 0  @ 121
	voice_square_1 0, 2, 0, 0, 15, 0  @ 122
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 0, 15, 0  @ 123
	voice_square_1 0, 2, 0, 0, 15, 0  @ 124
	voice_directsound 60, 0, DirectSoundWaveData_872A5D0, 255, 0, 255, 127  @ 125
	voice_noise_alt 0, 0, 1, 0, 0  @ 126
	voice_keysplit_all voicegroup201  @ 127
	voice_square_1 0, 2, 0, 0, 15, 0  @ 128 0
	voice_square_1 0, 2, 0, 0, 15, 0  @ 129 1
	voice_square_1 0, 2, 0, 0, 15, 0  @ 130 2
	voice_square_1 0, 2, 0, 0, 15, 0  @ 131 3
	voice_square_1 0, 2, 0, 0, 15, 0  @ 132 4
	voice_square_1 0, 2, 0, 0, 15, 0  @ 133 5
	voice_square_1 0, 2, 0, 0, 15, 0  @ 134 6
	voice_square_1 0, 2, 0, 0, 15, 0  @ 135 7
	voice_square_1 0, 2, 0, 0, 15, 0  @ 136 8
	voice_square_1 0, 2, 0, 0, 15, 0  @ 137 9
	voice_square_1_alt 0, 2, 0, 4, 0, 1  @ 138 10
	voice_square_2_alt 2, 0, 4, 0, 1  @ 139 11
	voice_square_1_alt 0, 2, 0, 3, 0, 1  @ 140 12
	voice_square_2_alt 2, 0, 3, 0, 1  @ 141 13
	voice_square_1 0, 2, 0, 0, 15, 0  @ 142 14
	voice_square_1 0, 2, 0, 0, 15, 0  @ 143 15
	voice_square_1 0, 2, 0, 0, 15, 0  @ 144 16
	voice_square_1 0, 2, 0, 0, 15, 0  @ 145 17
	voice_square_1 0, 2, 0, 0, 15, 0  @ 146 18
	voice_square_1 0, 2, 0, 0, 15, 0  @ 147 19
	voice_square_1 0, 2, 0, 0, 15, 0  @ 148 20
	voice_square_1 0, 2, 0, 0, 15, 0  @ 149 21
	voice_square_1 0, 2, 0, 0, 15, 0  @ 150 22
	voice_square_1 0, 2, 0, 0, 15, 0  @ 151 23
	voice_square_1 0, 2, 0, 0, 15, 0  @ 152 24
	voice_square_1 0, 2, 0, 0, 15, 0  @ 153 25
	voice_square_1 0, 2, 0, 0, 15, 0  @ 154 26
	voice_square_1 0, 2, 0, 0, 15, 0  @ 155 27
	voice_square_1 0, 2, 0, 0, 15, 0  @ 156 28
	voice_square_1 0, 2, 0, 0, 15, 0  @ 157 29
	voice_square_1 0, 2, 0, 0, 15, 0  @ 158 30
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 250, 255, 165  @ 159 31
	voice_square_1 0, 2, 0, 0, 15, 0  @ 160 32
	voice_directsound 60, 0, DirectSoundWaveData_sc88_piano1_72, 64, 0, 255, 188  @ 161 33
	voice_square_1 0, 2, 0, 0, 15, 0  @ 162 34
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 0, 255, 188  @ 163 35
	voice_square_1 0, 2, 0, 0, 15, 0  @ 164 36
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_unison_slap, 255, 180, 154, 165  @ 165 37
	voice_directsound 60, 0, DirectSoundWaveData_unused_acid_bass, 255, 252, 0, 115  @ 166 38
	voice_square_1 0, 2, 0, 0, 15, 0  @ 167 39
	voice_square_1 0, 2, 0, 0, 15, 0  @ 168 40
	voice_square_1 0, 2, 0, 0, 15, 0  @ 169 41
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 242, 210, 127  @ 170 42
	voice_square_1 0, 2, 0, 0, 15, 0  @ 171 43
	voice_square_1 0, 2, 0, 0, 15, 0  @ 172 44
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 210, 0, 38  @ 173 45
	voice_square_1 0, 2, 0, 0, 15, 0  @ 174 46
	voice_square_1 0, 2, 0, 0, 15, 0  @ 175 47
	voice_square_1 0, 2, 0, 0, 15, 0  @ 176 48
	voice_square_1 0, 2, 0, 0, 15, 0  @ 177 49
	voice_square_1 0, 2, 0, 0, 15, 0  @ 178 50
	voice_square_1 0, 2, 0, 0, 15, 0  @ 179 51
	voice_square_1 0, 2, 0, 0, 15, 0  @ 180 52
	voice_square_1 0, 2, 0, 0, 15, 0  @ 181 53
	voice_square_1 0, 2, 0, 0, 15, 0  @ 182 54
	voice_square_1 0, 2, 0, 0, 15, 0  @ 183 55
	voice_square_1 0, 2, 0, 0, 15, 0  @ 184 56
	voice_square_1 0, 2, 0, 0, 15, 0  @ 185 57
	voice_square_1 0, 2, 0, 0, 15, 0  @ 186 58
	voice_square_1 0, 2, 0, 0, 15, 0  @ 187 59
	voice_square_1 0, 2, 0, 0, 15, 0  @ 188 60
	voice_square_1 0, 2, 0, 0, 15, 0  @ 189 61
	voice_square_1 0, 2, 0, 0, 15, 0  @ 190 62
	voice_directsound 60, 0, DirectSoundWaveData_sc88_square_wave, 255, 240, 185, 127  @ 191 63
	voice_directsound 60, 0, DirectSoundWaveData_sc88_square_wave, 255, 253, 210, 127  @ 192 64
	voice_directsound 60, 0, DirectSoundWaveData_sc88_square_wave, 255, 245, 185, 165  @ 193 65
	voice_square_1 0, 2, 0, 0, 15, 0  @ 194 66
	voice_square_1 0, 2, 0, 0, 15, 0  @ 195 67
	voice_square_1 0, 2, 0, 0, 15, 0  @ 196 68
	voice_square_2_alt 3, 0, 7, 15, 0  @ 197 69
	voice_square_2_alt 3, 5, 16, 0, 1  @ 198 70
	voice_square_1_alt 0, 1, 5, 16, 0, 1  @ 199 71
	voice_square_1 0, 2, 0, 0, 15, 0  @ 200 72
	voice_square_1 0, 2, 0, 0, 15, 0  @ 201 73
	voice_square_1 0, 2, 0, 0, 15, 0  @ 202 74
	voice_square_1 0, 2, 0, 0, 15, 0  @ 203 75
	voice_square_2_alt 0, 6, 3, 7, 1  @ 204 76
	voice_square_1_alt 0, 0, 6, 3, 7, 1  @ 205 77
	voice_square_1 0, 2, 0, 0, 15, 0  @ 206 78
	voice_square_1 0, 2, 0, 0, 15, 0  @ 207 79
	voice_square_2_alt 3, 0, 4, 4, 1  @ 208 80
	voice_square_2_alt 1, 0, 4, 4, 1  @ 209 81
	voice_square_2_alt 2, 0, 4, 4, 1  @ 210 82
	voice_square_1_alt 0, 0, 0, 4, 4, 1  @ 211 83
	voice_square_2_alt 0, 0, 4, 4, 1  @ 212 84
	voice_square_1_alt 0, 1, 0, 4, 4, 1  @ 213 85
	voice_square_1_alt 0, 2, 0, 4, 4, 1  @ 214 86
	voice_square_1_alt 0, 3, 0, 4, 4, 1  @ 215 87
	voice_square_2_alt 3, 0, 5, 4, 2  @ 216 88
	voice_square_1_alt 0, 3, 0, 5, 4, 2  @ 217 89
	voice_square_2_alt 0, 0, 5, 4, 2  @ 218 90
	voice_square_1_alt 0, 0, 0, 5, 4, 2  @ 219 91
	voice_square_2_alt 1, 0, 5, 4, 2  @ 220 92
	voice_square_1_alt 0, 1, 0, 5, 4, 2  @ 221 93
	voice_square_2_alt 2, 0, 5, 4, 2  @ 222 94
	voice_square_1_alt 0, 2, 0, 5, 4, 2  @ 223 95
	voice_square_1 0, 2, 0, 0, 15, 0  @ 224 96
	voice_square_1 0, 2, 0, 0, 15, 0  @ 225 97
	voice_square_1 0, 2, 0, 0, 15, 0  @ 226 98
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 7, 12, 1  @ 227 99
	voice_square_1 0, 2, 0, 0, 15, 0  @ 228 100
	voice_square_2_alt 1, 0, 5, 1, 2  @ 229 101
	voice_square_1_alt 0, 0, 0, 5, 1, 2  @ 230 102
	voice_square_1_alt 0, 0, 0, 7, 11, 1  @ 231 103
	voice_square_1 0, 2, 0, 0, 15, 0  @ 232 104
	voice_square_1_alt 0, 1, 0, 4, 1, 1  @ 233 105
	voice_square_1_alt 0, 2, 0, 5, 1, 1  @ 234 106
	voice_square_2_alt 2, 0, 5, 1, 1  @ 235 107
	voice_square_1 0, 2, 0, 0, 15, 0  @ 236 108
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 0, 15, 0  @ 237 109
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 0, 15, 0  @ 238 110
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 3, 9, 0  @ 239 111
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 4, 12, 0  @ 240 112
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 0, 15, 0  @ 241 113
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 7, 15, 1  @ 242 114
	voice_square_1 0, 2, 0, 0, 15, 0  @ 243 115
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 0, 15, 0  @ 244 116
	voice_square_1 0, 2, 0, 0, 15, 0  @ 245 117
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 0, 15, 0  @ 246 118
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 0, 15, 0  @ 247 119
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 11, 3, 1  @ 248 120
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 4, 12, 0  @ 249 121
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 0, 15, 0  @ 250 122
	voice_programmable_wave_alt ProgrammableWaveData_Custom118, 0, 7, 15, 0  @ 251 123
	voice_square_1 0, 2, 0, 0, 15, 0  @ 252 124
	voice_noise_alt 0, 0, 0, 15, 0  @ 253 125
	voice_noise_alt 0, 0, 2, 2, 0  @ 254 126
	voice_square_1 0, 2, 0, 0, 15, 0  @ 255 127
