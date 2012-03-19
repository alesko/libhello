/*
 * Library to easily retrive and display images and display text
 * intended as questionare. 
 *
 * Written by Alexnader Skoglund <alesko@member.fsf.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */



#ifndef __KICYBERLAB_H__
#define __KICYBERLAB_H__

#ifdef __cplusplus
extern "C" {
#endif
  
  void kiInitBus(void);
  int  kiSetBusSpeed(int speed);
  int  kiGetCameras(int deviceType);
  int  kiSetCameraFeature(int cameraID, int feature,int value);
  int  kiStartCamera(int cameraID);
  int  kiGetImage(int cameraID, int* videoTexture);
  int  kiLoadQuestionare(int fd,char rw);
  int  kiShuffleVector(int* list,int number);

#ifdef __cplusplus
}
#endif

#endif
