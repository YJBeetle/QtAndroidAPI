#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::os
{
	class AsyncTask_Status : public java::lang::Enum
	{
	public:
		// Fields
		static android::os::AsyncTask_Status FINISHED();
		static android::os::AsyncTask_Status PENDING();
		static android::os::AsyncTask_Status RUNNING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsyncTask_Status(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AsyncTask_Status(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::AsyncTask_Status valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::os

