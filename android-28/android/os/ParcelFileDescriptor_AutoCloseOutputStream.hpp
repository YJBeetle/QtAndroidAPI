#pragma once

#include "../../java/io/FileOutputStream.hpp"

namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::os
{
	class ParcelFileDescriptor_AutoCloseOutputStream : public java::io::FileOutputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParcelFileDescriptor_AutoCloseOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FileOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		ParcelFileDescriptor_AutoCloseOutputStream(QAndroidJniObject obj);
		
		// Constructors
		ParcelFileDescriptor_AutoCloseOutputStream(android::os::ParcelFileDescriptor arg0);
		
		// Methods
		void close() const;
	};
} // namespace android::os

