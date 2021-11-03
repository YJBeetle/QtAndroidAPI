#include "../../../JByteArray.hpp"
#include "./AssetManager.hpp"
#include "./AssetManager_AssetInputStream.hpp"

namespace android::content::res
{
	// Fields
	
	// QAndroidJniObject forward
	AssetManager_AssetInputStream::AssetManager_AssetInputStream(QAndroidJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	
	// Methods
	jint AssetManager_AssetInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void AssetManager_AssetInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void AssetManager_AssetInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean AssetManager_AssetInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint AssetManager_AssetInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint AssetManager_AssetInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint AssetManager_AssetInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void AssetManager_AssetInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong AssetManager_AssetInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace android::content::res

