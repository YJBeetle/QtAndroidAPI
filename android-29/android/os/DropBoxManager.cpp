#include "../../JByteArray.hpp"
#include "./DropBoxManager_Entry.hpp"
#include "../../java/io/File.hpp"
#include "../../JString.hpp"
#include "./DropBoxManager.hpp"

namespace android::os
{
	// Fields
	JString DropBoxManager::ACTION_DROPBOX_ENTRY_ADDED()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"ACTION_DROPBOX_ENTRY_ADDED",
			"Ljava/lang/String;"
		);
	}
	JString DropBoxManager::EXTRA_DROPPED_COUNT()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_DROPPED_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString DropBoxManager::EXTRA_TAG()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_TAG",
			"Ljava/lang/String;"
		);
	}
	JString DropBoxManager::EXTRA_TIME()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_TIME",
			"Ljava/lang/String;"
		);
	}
	jint DropBoxManager::IS_EMPTY()
	{
		return getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_EMPTY"
		);
	}
	jint DropBoxManager::IS_GZIPPED()
	{
		return getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_GZIPPED"
		);
	}
	jint DropBoxManager::IS_TEXT()
	{
		return getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_TEXT"
		);
	}
	
	// QAndroidJniObject forward
	DropBoxManager::DropBoxManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void DropBoxManager::addData(JString arg0, JByteArray arg1, jint arg2) const
	{
		callMethod<void>(
			"addData",
			"(Ljava/lang/String;[BI)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2
		);
	}
	void DropBoxManager::addFile(JString arg0, java::io::File arg1, jint arg2) const
	{
		callMethod<void>(
			"addFile",
			"(Ljava/lang/String;Ljava/io/File;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	void DropBoxManager::addText(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"addText",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::os::DropBoxManager_Entry DropBoxManager::getNextEntry(JString arg0, jlong arg1) const
	{
		return callObjectMethod(
			"getNextEntry",
			"(Ljava/lang/String;J)Landroid/os/DropBoxManager$Entry;",
			arg0.object<jstring>(),
			arg1
		);
	}
	jboolean DropBoxManager::isTagEnabled(JString arg0) const
	{
		return callMethod<jboolean>(
			"isTagEnabled",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::os

