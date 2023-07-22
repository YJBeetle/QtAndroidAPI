#pragma once

#include "../../JByteArray.hpp"
#include "./DropBoxManager_Entry.def.hpp"
#include "../../java/io/File.def.hpp"
#include "../../JString.hpp"
#include "./DropBoxManager.def.hpp"

namespace android::os
{
	// Fields
	inline JString DropBoxManager::ACTION_DROPBOX_ENTRY_ADDED()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"ACTION_DROPBOX_ENTRY_ADDED",
			"Ljava/lang/String;"
		);
	}
	inline JString DropBoxManager::EXTRA_DROPPED_COUNT()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_DROPPED_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString DropBoxManager::EXTRA_TAG()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_TAG",
			"Ljava/lang/String;"
		);
	}
	inline JString DropBoxManager::EXTRA_TIME()
	{
		return getStaticObjectField(
			"android.os.DropBoxManager",
			"EXTRA_TIME",
			"Ljava/lang/String;"
		);
	}
	inline jint DropBoxManager::IS_EMPTY()
	{
		return getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_EMPTY"
		);
	}
	inline jint DropBoxManager::IS_GZIPPED()
	{
		return getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_GZIPPED"
		);
	}
	inline jint DropBoxManager::IS_TEXT()
	{
		return getStaticField<jint>(
			"android.os.DropBoxManager",
			"IS_TEXT"
		);
	}
	
	// Constructors
	
	// Methods
	inline void DropBoxManager::addData(JString arg0, JByteArray arg1, jint arg2) const
	{
		callMethod<void>(
			"addData",
			"(Ljava/lang/String;[BI)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2
		);
	}
	inline void DropBoxManager::addFile(JString arg0, java::io::File arg1, jint arg2) const
	{
		callMethod<void>(
			"addFile",
			"(Ljava/lang/String;Ljava/io/File;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline void DropBoxManager::addText(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"addText",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::os::DropBoxManager_Entry DropBoxManager::getNextEntry(JString arg0, jlong arg1) const
	{
		return callObjectMethod(
			"getNextEntry",
			"(Ljava/lang/String;J)Landroid/os/DropBoxManager$Entry;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean DropBoxManager::isTagEnabled(JString arg0) const
	{
		return callMethod<jboolean>(
			"isTagEnabled",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
