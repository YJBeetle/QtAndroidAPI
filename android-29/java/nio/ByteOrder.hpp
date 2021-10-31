#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::nio
{
	class ByteOrder : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject BIG_ENDIAN();
		static QAndroidJniObject LITTLE_ENDIAN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ByteOrder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ByteOrder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject nativeOrder();
		jstring toString();
	};
} // namespace java::nio

