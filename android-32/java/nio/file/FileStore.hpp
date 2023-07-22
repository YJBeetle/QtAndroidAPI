#pragma once

#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./FileStore.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject FileStore::getAttribute(JString arg0) const
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline jlong FileStore::getBlockSize() const
	{
		return callMethod<jlong>(
			"getBlockSize",
			"()J"
		);
	}
	inline JObject FileStore::getFileStoreAttributeView(JClass arg0) const
	{
		return callObjectMethod(
			"getFileStoreAttributeView",
			"(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;",
			arg0.object<jclass>()
		);
	}
	inline jlong FileStore::getTotalSpace() const
	{
		return callMethod<jlong>(
			"getTotalSpace",
			"()J"
		);
	}
	inline jlong FileStore::getUnallocatedSpace() const
	{
		return callMethod<jlong>(
			"getUnallocatedSpace",
			"()J"
		);
	}
	inline jlong FileStore::getUsableSpace() const
	{
		return callMethod<jlong>(
			"getUsableSpace",
			"()J"
		);
	}
	inline jboolean FileStore::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	inline JString FileStore::name() const
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean FileStore::supportsFileAttributeView(JClass arg0) const
	{
		return callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	inline jboolean FileStore::supportsFileAttributeView(JString arg0) const
	{
		return callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JString FileStore::type() const
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
