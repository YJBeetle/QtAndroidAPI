#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::display
{
	class VirtualDisplay_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VirtualDisplay_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VirtualDisplay_Callback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VirtualDisplay_Callback();
		
		// Methods
		void onPaused() const;
		void onResumed() const;
		void onStopped() const;
	};
} // namespace android::hardware::display

