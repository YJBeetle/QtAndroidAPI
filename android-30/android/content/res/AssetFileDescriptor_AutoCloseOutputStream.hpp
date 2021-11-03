#pragma once

#include "../../os/ParcelFileDescriptor_AutoCloseOutputStream.hpp"

class JByteArray;
namespace android::content::res
{
	class AssetFileDescriptor;
}

namespace android::content::res
{
	class AssetFileDescriptor_AutoCloseOutputStream : public android::os::ParcelFileDescriptor_AutoCloseOutputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssetFileDescriptor_AutoCloseOutputStream(const char *className, const char *sig, Ts...agv) : android::os::ParcelFileDescriptor_AutoCloseOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		AssetFileDescriptor_AutoCloseOutputStream(QAndroidJniObject obj);
		
		// Constructors
		AssetFileDescriptor_AutoCloseOutputStream(android::content::res::AssetFileDescriptor arg0);
		
		// Methods
		void write(JByteArray arg0) const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace android::content::res

