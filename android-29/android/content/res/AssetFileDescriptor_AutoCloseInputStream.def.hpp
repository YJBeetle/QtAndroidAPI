#pragma once

#include "../../os/ParcelFileDescriptor_AutoCloseInputStream.def.hpp"

class JByteArray;
namespace android::content::res
{
	class AssetFileDescriptor;
}

namespace android::content::res
{
	class AssetFileDescriptor_AutoCloseInputStream : public android::os::ParcelFileDescriptor_AutoCloseInputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssetFileDescriptor_AutoCloseInputStream(const char *className, const char *sig, Ts...agv) : android::os::ParcelFileDescriptor_AutoCloseInputStream(className, sig, std::forward<Ts>(agv)...) {}
		AssetFileDescriptor_AutoCloseInputStream(QAndroidJniObject obj) : android::os::ParcelFileDescriptor_AutoCloseInputStream(obj) {}
		
		// Constructors
		AssetFileDescriptor_AutoCloseInputStream(android::content::res::AssetFileDescriptor arg0);
		
		// Methods
		jint available() const;
		void mark(jint arg0) const;
		jboolean markSupported() const;
		jint read() const;
		jint read(JByteArray arg0) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		void reset() const;
		jlong skip(jlong arg0) const;
	};
} // namespace android::content::res

