#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::os
{
	class AsyncTask_Status : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FINISHED();
		static QAndroidJniObject PENDING();
		static QAndroidJniObject RUNNING();
		
		AsyncTask_Status(QAndroidJniObject obj);
		// Constructors
		AsyncTask_Status() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::os

