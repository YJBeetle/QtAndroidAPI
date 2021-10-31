#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class TimingLogger : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimingLogger(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TimingLogger(QJniObject obj);
		
		// Constructors
		TimingLogger(jstring arg0, jstring arg1);
		
		// Methods
		void addSplit(jstring arg0);
		void dumpToLog();
		void reset();
		void reset(jstring arg0, jstring arg1);
	};
} // namespace android::util

