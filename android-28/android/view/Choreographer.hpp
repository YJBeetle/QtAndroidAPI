#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Looper;
}

namespace android::view
{
	class Choreographer : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Choreographer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Choreographer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::Choreographer getInstance();
		void postFrameCallback(JObject arg0) const;
		void postFrameCallbackDelayed(JObject arg0, jlong arg1) const;
		void removeFrameCallback(JObject arg0) const;
	};
} // namespace android::view

