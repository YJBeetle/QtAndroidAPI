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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsyncTask_Status(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AsyncTask_Status(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::os

