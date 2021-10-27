#include "./AsyncTask_Status.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject AsyncTask_Status::FINISHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.AsyncTask$Status",
			"FINISHED",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	QAndroidJniObject AsyncTask_Status::PENDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.AsyncTask$Status",
			"PENDING",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	QAndroidJniObject AsyncTask_Status::RUNNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.AsyncTask$Status",
			"RUNNING",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	
	AsyncTask_Status::AsyncTask_Status(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AsyncTask_Status::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.AsyncTask$Status",
			"valueOf",
			"(Ljava/lang/String;)Landroid/os/AsyncTask$Status;",
			arg0
		);
	}
	QAndroidJniObject AsyncTask_Status::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.AsyncTask$Status",
			"valueOf",
			"(Ljava/lang/String;)Landroid/os/AsyncTask$Status;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray AsyncTask_Status::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.AsyncTask$Status",
			"values",
			"()[Landroid/os/AsyncTask$Status;"
		).object<jarray>();
	}
} // namespace android::os

