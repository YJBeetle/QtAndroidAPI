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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Animator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Animator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Animator();
		
		// Methods
		void addListener(JObject arg0) const;
		void addPauseListener(JObject arg0) const;
		void cancel() const;
		android::animation::Animator clone() const;
		void end() const;
		jlong getDuration() const;
		JObject getInterpolator() const;
		java::util::ArrayList getListeners() const;
		jlong getStartDelay() const;
		jlong getTotalDuration() const;
		jboolean isPaused() const;
		jboolean isRunning() const;
		jboolean isStarted() const;
		void pause() const;
		void removeAllListeners() const;
		void removeListener(JObject arg0) const;
		void removePauseListener(JObject arg0) const;
		void resume() const;
		android::animation::Animator setDuration(jlong arg0) const;
		void setInterpolator(JObject arg0) const;
		void setStartDelay(jlong arg0) const;
		void setTarget(JObject arg0) const;
		void setupEndValues() const;
		void setupStartValues() const;
		void start() const;
	};
} // namespace android::animation

