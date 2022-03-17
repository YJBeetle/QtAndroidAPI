#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/AssetFileDescriptor.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "./SoundPool.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline SoundPool::SoundPool(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.media.SoundPool",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline void SoundPool::autoPause() const
	{
		callMethod<void>(
			"autoPause",
			"()V"
		);
	}
	inline void SoundPool::autoResume() const
	{
		callMethod<void>(
			"autoResume",
			"()V"
		);
	}
	inline jint SoundPool::load(android::content::res::AssetFileDescriptor arg0, jint arg1) const
	{
		return callMethod<jint>(
			"load",
			"(Landroid/content/res/AssetFileDescriptor;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jint SoundPool::load(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"load",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint SoundPool::load(android::content::Context arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"load",
			"(Landroid/content/Context;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jint SoundPool::load(java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jint arg3) const
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
	inline void SoundPool::pause(jint arg0) const
	{
		callMethod<void>(
			"pause",
			"(I)V",
			arg0
		);
	}
	inline jint SoundPool::play(jint arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, jfloat arg5) const
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
	inline void SoundPool::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void SoundPool::resume(jint arg0) const
	{
		callMethod<void>(
			"resume",
			"(I)V",
			arg0
		);
	}
	inline void SoundPool::setLoop(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLoop",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void SoundPool::setOnLoadCompleteListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnLoadCompleteListener",
			"(Landroid/media/SoundPool$OnLoadCompleteListener;)V",
			arg0.object()
		);
	}
	inline void SoundPool::setPriority(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setPriority",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void SoundPool::setRate(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setRate",
			"(IF)V",
			arg0,
			arg1
		);
	}
	inline void SoundPool::setVolume(jint arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setVolume",
			"(IFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void SoundPool::stop(jint arg0) const
	{
		callMethod<void>(
			"stop",
			"(I)V",
			arg0
		);
	}
	inline jboolean SoundPool::unload(jint arg0) const
	{
		return callMethod<jboolean>(
			"unload",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

// Base class headers

