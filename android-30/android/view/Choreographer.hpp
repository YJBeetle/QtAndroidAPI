#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class Choreographer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Choreographer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Choreographer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::Choreographer getInstance();
		void postFrameCallback(__JniBaseClass arg0);
		void postFrameCallbackDelayed(__JniBaseClass arg0, jlong arg1);
		void removeFrameCallback(__JniBaseClass arg0);
	};
} // namespace android::view

