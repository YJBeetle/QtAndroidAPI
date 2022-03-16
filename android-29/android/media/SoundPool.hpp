#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace java::io
{
	class FileDescriptor;
}
class JString;

namespace android::media
{
	class SoundPool : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SoundPool(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SoundPool(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SoundPool(jint arg0, jint arg1, jint arg2);
		
		// Methods
		void autoPause() const;
		void autoResume() const;
		jint load(android::content::res::AssetFileDescriptor arg0, jint arg1) const;
		jint load(JString arg0, jint arg1) const;
		jint load(android::content::Context arg0, jint arg1, jint arg2) const;
		jint load(java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jint arg3) const;
		void pause(jint arg0) const;
		jint play(jint arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, jfloat arg5) const;
		void release() const;
		void resume(jint arg0) const;
		void setLoop(jint arg0, jint arg1) const;
		void setOnLoadCompleteListener(JObject arg0) const;
		void setPriority(jint arg0, jint arg1) const;
		void setRate(jint arg0, jfloat arg1) const;
		void setVolume(jint arg0, jfloat arg1, jfloat arg2) const;
		void stop(jint arg0) const;
		jboolean unload(jint arg0) const;
	};
} // namespace android::media

