#pragma once

#include "../../JByteArray.hpp"
#include "../../java/io/File.def.hpp"
#include "../../java/io/FileInputStream.def.hpp"
#include "../../java/io/FileOutputStream.def.hpp"
#include "./AtomicFile.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline AtomicFile::AtomicFile(java::io::File arg0)
		: JObject(
			"android.util.AtomicFile",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void AtomicFile::delete_() const
	{
		callMethod<void>(
			"delete",
			"()V"
		);
	}
	inline void AtomicFile::failWrite(java::io::FileOutputStream arg0) const
	{
		callMethod<void>(
			"failWrite",
			"(Ljava/io/FileOutputStream;)V",
			arg0.object()
		);
	}
	inline void AtomicFile::finishWrite(java::io::FileOutputStream arg0) const
	{
		callMethod<void>(
			"finishWrite",
			"(Ljava/io/FileOutputStream;)V",
			arg0.object()
		);
	}
	inline java::io::File AtomicFile::getBaseFile() const
	{
		return callObjectMethod(
			"getBaseFile",
			"()Ljava/io/File;"
		);
	}
	inline java::io::FileInputStream AtomicFile::openRead() const
	{
		return callObjectMethod(
			"openRead",
			"()Ljava/io/FileInputStream;"
		);
	}
	inline JByteArray AtomicFile::readFully() const
	{
		return callObjectMethod(
			"readFully",
			"()[B"
		);
	}
	inline java::io::FileOutputStream AtomicFile::startWrite() const
	{
		return callObjectMethod(
			"startWrite",
			"()Ljava/io/FileOutputStream;"
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
