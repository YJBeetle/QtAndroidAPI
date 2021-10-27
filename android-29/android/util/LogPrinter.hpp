#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class LogPrinter : public __JniBaseClass
	{
	public:
		// Fields
		
		LogPrinter(QAndroidJniObject obj);
		// Constructors
		LogPrinter(jint &arg0, jstring &arg1);
		LogPrinter(jint &arg0, const QString &arg1);
		LogPrinter() = default;
		
		// Methods
		void println(jstring arg0);
		void println(const QString &arg0);
	};
} // namespace android::util

