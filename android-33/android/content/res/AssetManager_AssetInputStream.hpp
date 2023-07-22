#pragma once

#include "../../../JByteArray.hpp"
#include "./AssetManager.def.hpp"
#include "./AssetManager_AssetInputStream.def.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint AssetManager_AssetInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void AssetManager_AssetInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void AssetManager_AssetInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean AssetManager_AssetInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint AssetManager_AssetInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint AssetManager_AssetInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint AssetManager_AssetInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void AssetManager_AssetInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong AssetManager_AssetInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace android::content::res

// Base class headers
#include "../../../java/io/InputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::res;
#endif
