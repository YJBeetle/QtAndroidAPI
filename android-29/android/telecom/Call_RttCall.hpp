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
		
		Call_RttCall(QAndroidJniObject obj);
		// Constructors
		Call_RttCall() = default;
		
		// Methods
		jint getRttAudioMode();
		jstring read();
		jstring readImmediately();
		void setRttMode(jint arg0);
		void write(jstring arg0);
		void write(const QString &arg0);
	};
} // namespace android::telecom

