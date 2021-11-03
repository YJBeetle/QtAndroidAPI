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
		
		// QJniObject forward
		template<typename ...Ts> explicit Choreographer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Choreographer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::Choreographer getInstance();
		void postFrameCallback(JObject arg0);
		void postFrameCallbackDelayed(JObject arg0, jlong arg1);
		void removeFrameCallback(JObject arg0);
	};
} // namespace android::view

