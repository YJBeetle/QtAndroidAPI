#pragma once

#include "../../JObject.hpp"


namespace java::nio
{
	class ByteOrder : public JObject
	{
	public:
		// Fields
		static java::nio::ByteOrder BIG_ENDIAN();
		static java::nio::ByteOrder LITTLE_ENDIAN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ByteOrder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ByteOrder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::ByteOrder nativeOrder();
		jstring toString();
	};
} // namespace java::nio

