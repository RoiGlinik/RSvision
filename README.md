# RSvision

### opencv-2.4.13

### Adding Bin to system enviornment path
1. Open control panel -> system.
2. On the left menu open Advanced system settings.
3. in advanced tab use the Environment Variables button.
4. add path to bin folder in PATH user variable.

in Visual studio we need to add paths to 
Include directiores
Library directiores
and give some file to the linker.

### Create Project
1. Create Visual C++ Win32 App
2. Application Type:
	Console application.
	additional options: 
	empty project.

right click on the project and open properties.
in Configuration Properties -> VC++ Directories.
you will see
	Include directiores
	Library directiores
add
	\openCV\build\include path to the Include directories.
	\openCV\build\x86\vcXX\lib to the Library directories.
	
then linker -> input -> additional dependencies.
 
- opencv_calib3d2413d.lib
- opencv_contrib2413d.lib
- opencv_core2413d.lib
- opencv_features2d2413d.lib
- opencv_flann2413d.lib
- opencv_gpu2413d.lib
- opencv_highgui2413d.lib
- opencv_imgproc2413d.lib
- opencv_legacy2413d.lib
- opencv_ml2413d.lib
- opencv_nonfree2413d.lib
- opencv_objdetect2413d.lib
- opencv_ocl2413d.lib
- opencv_photo2413d.lib
- opencv_stitching2413d.lib
- opencv_superres2413d.lib
- opencv_ts2413d.lib
- opencv_video2413d.lib
- opencv_videostab2413d.lib


http://docs.opencv.org/2.4/modules/highgui/doc/reading_and_writing_images_and_video.html?highlight=imread#cv2.imread
	
### Take files from git.	
 
 
### GIT

The repository url:
    https://github.com/RoiGlinik/RSvision.git


use: git status 
to see which files are tracked as files to look for when commting.
use: git add [file name]
to add files to track. then use git status again to see that these files are being tracked.	

to connect to remote repository- 
git remote add [repo name] [repo url]

can use git log to check history of commits.

can use git push -u [repo name] [branch]
git pull [repo name] [branch]

COMMITING:
git commit -m 'YOUR MESSAGE'

to make a new brance
git branch [name]

to switch between branches.
git checkout [branch]
