#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::display
{
	class VirtualDisplay_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VirtualDisplay_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VirtualDisplay_Callback(QJniObject obj);
		
		// Constructors
		VirtualDisplay_Callback();
		
		// Methods
		void onPaused();
		void onResumed();
		void onStopped();
	};
} // namespace android::hardware::display

