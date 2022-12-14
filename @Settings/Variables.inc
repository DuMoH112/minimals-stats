[Variables]
Version=1.1
;==========================
; General settings
;==========================

PlayerName=WMP
; Change this variable to your media player.
; Visit this page for all supported players: http://docs.rainmeter.net/manual/plugins/nowplaying#playerlist

ScaleVisualizer=1.0
; Changes the size of the visualizer
; Can be anything between 0.1 (really small) to 1.0 (fullscreen).
; Default: 0.8

ScaleSongInformation=0.8
; Changes the size of the song information skin.
; Can be anything between 0.1 (really small) to 1.0 (fullscreen).
; Default: 0.8

;==========================
; Spectrum settings
;==========================

FlipVisualizer=0
; This will flip the spectrum so that the bars go down instead of up.
; Default: 0

AverageSize=5
; Higher numbers = smoother visualization, but with delay
; Lower numbers = faster visualization, but less smooth
; This will increase/decrease performance and the quality of the visualization.
; Default: 4

BarWidth=10
; Width of the visualizer bars, don't go lower as 6 or the rounded edges will dissolve.
; Default: 18

BarHeight=150
; Height of the visualizers bars in Pixels. Also allowed are percentages based on the screen size.
; Default: 400

BarGap=7
; Margin between the different visualizer bars.
; Default: 7

BarCount=100
; Number of the visualizer bars, maximum 100.
; Default: 63

MinBarValue=0.005
; Bars shown at the bottom of the visualizer bars.
; Increasing the value will make the bars bigger, decreasing it smaller.
; Default: 0.005

Sensitivity=25
; A number specifying in what dB range the measure will return FFT and Band data. 
; Increasing this value will make the visualizer respond to quieter sounds and make the graph bigger, decreasing it will show louder sounds.
; Default: 55

FFTSize=3072
; A number value for the frequency resolution of the output data.
; Increasing this value will add more cpu load, so keep it for the best result on this value. If you got an slower pc change the value to 512 or 256.
; This will increase/decrease performance and the quality of the visualization.
; Best kept at default values.
; Default: 4096

FFTAttack=80
; Time in Milliseconds till the bars rise to the signal level.
; Higher values adds delay to the visualization, but makes it much smoother and calmer.
; Best kept at default values.
; Default: 80

FFTDecay=110
; Time in Milliseconds till the bars fall from the signal level.
; Higher values will keep the bars much longer visible, lower values makes it more "jumpy".
; Best kept at default values.
; Default: 110

FreqMin=20
; Minimum frequency detected by the visualizer.
; Default: 20

FreqMax=16400
; Maximum frequency detected by the visualizer.
; Default: 16400;

;==========================
; Style settings
;==========================

font1=Nexa Bold
font2=Nexa Light
; Fonts used for the title and artist.
; Font1 is for the Artist, Font2 for the Title
; Default: font1=Nexa Bold, font2=Nexa Light

FontSize1=72
FontSize2=40
; Font sizes for the title and artist.
; Font1 is for the Artist, Font2 for the Title
; Default: FontSize1=72, FontSize2=40

TextColor=#Black#
; Color used for text.
; Default: #White#

Color=255,255,255
; Color of the visualizer bars/monstercat cover in RGB(a).
; This is the default color when genre-based colors are activated.
; You can change the color to one of the following genres (in the list) by writing the genre like this: #Dubstep#

; This is the color list for the genre-based colors in RGB(a).
EDM=193,193,193
Electro=230,206,0
House=234,140,6
DnB=242,25,4
Dubstep=141,4,225
Drumstep=243,33,136
GlitchHop=11,151,87
Trap=140,15,39
Trance=0,126,231
HardDance=1,151,0
NuDisco=28,171,179
FutureBass=154,152,252
White=255,255,255
Black=0,0,0

EnableDynamicColors=0
; Changing this value will enable/disable dynamic colors.
; There are three different settings you can choose.

; 0 - OFF, all dynamic color settings disabled.

; 1 - GENRE, color will change dynamically to the genre of the song.
;     This will work currently only on AIMP, CAD, iTunes, WMP and Winamp.
;     Also the song needs Genre ID3 tags.

; 2 - COVER, color will change dynamically to the cover art of your song.

; This will have an major impact on the performance of the visualizer and your CPU.
; Turn off if you experience lags or slowdowns.
; Default: 0

ShowMonstercatCover=0
; Changing this value will replace the song cover with an full-color cover with the monstercat logo (like in the videos).
; Default: 0

NoArtistNameText=N/A
NoTrackNameText=N/A
; This will replace the replacement text when there's no track name/artist or if nothing is playing.
; Default: NoArtistNameText=N/A, NoTrackNameText=N/A

;=====================================================

; These variables are constants and are better untouched! Changing here will probably break something.
DefaultHeight=(#WORKAREAHEIGHT#/3)
BarCountCalc=(#BarCount#+1)
GenreColor=#Color#
MPMode=MeasureCoverNowPlaying
