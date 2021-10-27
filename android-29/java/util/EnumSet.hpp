#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractSet.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::lang
{
	class Enum;
}

namespace java::util
{
	class EnumSet : public java::util::AbstractSet
	{
	public:
		// Fields
		
		EnumSet(QAndroidJniObject obj);
		// Constructors
		EnumSet() = default;
		
		// Methods
		static QAndroidJniObject allOf(jclass arg0);
		static QAndroidJniObject complementOf(java::util::EnumSet arg0);
		static QAndroidJniObject copyOf(__JniBaseClass arg0);
		static QAndroidJniObject copyOf(java::util::EnumSet arg0);
		static QAndroidJniObject noneOf(jclass arg0);
		static QAndroidJniObject of(java::lang::Enum arg0);
		static QAndroidJniObject of(java::lang::Enum arg0, jarray arg1);
		static QAndroidJniObject of(java::lang::Enum arg0, java::lang::Enum arg1);
		static QAndroidJniObject of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2);
		static QAndroidJniObject of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3);
		static QAndroidJniObject of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3, java::lang::Enum arg4);
		static QAndroidJniObject range(java::lang::Enum arg0, java::lang::Enum arg1);
		QAndroidJniObject clone();
	};
} // namespace java::util

