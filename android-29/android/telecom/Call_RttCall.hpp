#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telecom
{
	class Call_RttCall : public __JniBaseClass
	{
	public:
		// Fields
		static jint RTT_MODE_FULL();
		static jint RTT_MODE_HCO();
		static jint RTT_MODE_VCO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Call_RttCall(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Call_RttCall(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getRttAudioMode();
		jstring read();
		jstring readImmediately();
		void setRttMode(jint arg0);
		void write(jstring arg0);
	};
} // namespace android::telecom

