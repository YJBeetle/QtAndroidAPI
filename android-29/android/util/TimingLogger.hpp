#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class TimingLogger : public __JniBaseClass
	{
	public:
		// Fields
		
		TimingLogger(QAndroidJniObject obj);
		// Constructors
		TimingLogger(jstring &arg0, jstring &arg1);
		TimingLogger(const QString &arg0, const QString &arg1);
		TimingLogger() = default;
		
		// Methods
		void addSplit(jstring arg0);
		void addSplit(const QString &arg0);
		void dumpToLog();
		void reset();
		void reset(jstring arg0, jstring arg1);
		void reset(const QString &arg0, const QString &arg1);
	};
} // namespace android::util

