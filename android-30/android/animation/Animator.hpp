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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Animator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Animator(QAndroidJniObject obj);
		
		// Constructors
		Animator();
		
		// Methods
		void addListener(__JniBaseClass arg0);
		void addPauseListener(__JniBaseClass arg0);
		void cancel();
		android::animation::Animator clone();
		void end();
		jlong getDuration();
		__JniBaseClass getInterpolator();
		java::util::ArrayList getListeners();
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
		android::animation::Animator setDuration(jlong arg0);
		void setInterpolator(__JniBaseClass arg0);
		void setStartDelay(jlong arg0);
		void setTarget(jobject arg0);
		void setupEndValues();
		void setupStartValues();
		void start();
	};
} // namespace android::animation

