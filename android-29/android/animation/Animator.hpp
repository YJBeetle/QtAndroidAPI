#pragma once

#include "../../JObject.hpp"

class JObject;
namespace java::util
{
	class ArrayList;
}

namespace android::animation
{
	class Animator : public JObject
	{
	public:
		// Fields
		static jlong DURATION_INFINITE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Animator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Animator(QJniObject obj);
		
		// Constructors
		Animator();
		
		// Methods
		void addListener(JObject arg0);
		void addPauseListener(JObject arg0);
		void cancel();
		android::animation::Animator clone();
		void end();
		jlong getDuration();
		JObject getInterpolator();
		java::util::ArrayList getListeners();
		jlong getStartDelay();
		jlong getTotalDuration();
		jboolean isPaused();
		jboolean isRunning();
		jboolean isStarted();
		void pause();
		void removeAllListeners();
		void removeListener(JObject arg0);
		void removePauseListener(JObject arg0);
		void resume();
		android::animation::Animator setDuration(jlong arg0);
		void setInterpolator(JObject arg0);
		void setStartDelay(jlong arg0);
		void setTarget(JObject arg0);
		void setupEndValues();
		void setupStartValues();
		void start();
	};
} // namespace android::animation

