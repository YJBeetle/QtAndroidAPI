#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace javax::crypto
{
	class MacSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MacSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MacSpi(QJniObject obj);
		
		// Constructors
		MacSpi();
		
		// Methods
		jobject clone();
	};
} // namespace javax::crypto

