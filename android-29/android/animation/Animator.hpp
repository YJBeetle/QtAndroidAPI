#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class ArrayList;
}

namespace android::animation
{
	class Animator : public __JniBaseClass
	{
	public:
		// Fields
		static jlong DURATION_INFINITE();
		
		Animator(QAndroidJniObject obj);
		// Constructors
		Animator();
		
		// Methods
		void addListener(__JniBaseClass arg0);
		void addPauseListener(__JniBaseClass arg0);
		void cancel();
		QAndroidJniObject clone();
		void end();
		jlong getDuration();
		QAndroidJniObject getInterpolator();
		QAndroidJniObject getListeners();
		jlong getStartDelay();
		jlong getTotalDuration();
		jboolean isPaused();
		jboolean isRunning();
		jboolean isStarted();
		void pause();
		void removeAllListeners();
		void removeListener(__JniBaseClass arg0);
		void removePauseListener(__JniBaseClass arg0);
		void resume();
		QAndroidJniObject setDuration(jlong arg0);
		void setInterpolator(__JniBaseClass arg0);
		void setStartDelay(jlong arg0);
		void setTarget(jobject arg0);
		void setupEndValues();
		void setupStartValues();
		void start();
	};
} // namespace android::animation

