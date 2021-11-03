#include "../content/Context.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../JString.hpp"
#include "./SoundPool.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	SoundPool::SoundPool(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SoundPool::SoundPool(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.media.SoundPool",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	void SoundPool::autoPause()
	{
		callMethod<void>(
			"autoPause",
			"()V"
		);
	}
	void SoundPool::autoResume()
	{
		callMethod<void>(
			"autoResume",
			"()V"
		);
	}
	jint SoundPool::load(android::content::res::AssetFileDescriptor arg0, jint arg1)
	{
		return callMethod<jint>(
			"load",
			"(Landroid/content/res/AssetFileDescriptor;I)I",
			arg0.object(),
			arg1
		);
	}
	jint SoundPool::load(JString arg0, jint arg1)
	{
		return callMethod<jint>(
			"load",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint SoundPool::load(android::content::Context arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"load",
			"(Landroid/content/Context;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jint SoundPool::load(java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jint arg3)
	{
		return callMethod<jint>(
			"load",
			"(Ljava/io/FileDescriptor;JJI)I",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void SoundPool::pause(jint arg0)
	{
		callMethod<void>(
			"pause",
			"(I)V",
			arg0
		);
	}
	jint SoundPool::play(jint arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, jfloat arg5)
	{
		return callMethod<jint>(
			"play",
			"(IFFIIF)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void SoundPool::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void SoundPool::resume(jint arg0)
	{
		callMethod<void>(
			"resume",
			"(I)V",
			arg0
		);
	}
	void SoundPool::setLoop(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLoop",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SoundPool::setOnLoadCompleteListener(JObject arg0)
	{
		callMethod<void>(
			"setOnLoadCompleteListener",
			"(Landroid/media/SoundPool$OnLoadCompleteListener;)V",
			arg0.object()
		);
	}
	void SoundPool::setPriority(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setPriority",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SoundPool::setRate(jint arg0, jfloat arg1)
	{
		callMethod<void>(
			"setRate",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void SoundPool::setVolume(jint arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"setVolume",
			"(IFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SoundPool::stop(jint arg0)
	{
		callMethod<void>(
			"stop",
			"(I)V",
			arg0
		);
	}
	jboolean SoundPool::unload(jint arg0)
	{
		return callMethod<jboolean>(
			"unload",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

