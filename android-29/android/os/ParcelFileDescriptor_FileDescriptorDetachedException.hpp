#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace android::os
{
	class ParcelFileDescriptor_FileDescriptorDetachedException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ParcelFileDescriptor_FileDescriptorDetachedException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		ParcelFileDescriptor_FileDescriptorDetachedException(QJniObject obj);
		
		// Constructors
		ParcelFileDescriptor_FileDescriptorDetachedException();
		
		// Methods
	};
} // namespace android::os

