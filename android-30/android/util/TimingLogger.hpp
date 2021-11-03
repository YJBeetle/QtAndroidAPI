#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class TimingLogger : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimingLogger(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimingLogger(QAndroidJniObject obj);
		
		// Constructors
		TimingLogger(jstring arg0, jstring arg1);
		
		// Methods
		void addSplit(jstring arg0);
		void dumpToLog();
		void reset();
		void reset(jstring arg0, jstring arg1);
	};
} // namespace android::util

