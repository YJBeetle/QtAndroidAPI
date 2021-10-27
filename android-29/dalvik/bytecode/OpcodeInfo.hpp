#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::dalvik::bytecode
{
	class OpcodeInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAXIMUM_PACKED_VALUE();
		static jint MAXIMUM_VALUE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::dalvik::bytecode


namespace __jni_impl::dalvik::bytecode
{
	// Fields
	jint OpcodeInfo::MAXIMUM_PACKED_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"dalvik.bytecode.OpcodeInfo",
			"MAXIMUM_PACKED_VALUE"
		);
	}
	jint OpcodeInfo::MAXIMUM_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"dalvik.bytecode.OpcodeInfo",
			"MAXIMUM_VALUE"
		);
	}
	
	// Constructors
	void OpcodeInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"dalvik.bytecode.OpcodeInfo",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::dalvik::bytecode

namespace dalvik::bytecode
{
	class OpcodeInfo : public __jni_impl::dalvik::bytecode::OpcodeInfo
	{
	public:
		OpcodeInfo(QAndroidJniObject obj) { __thiz = obj; }
		OpcodeInfo()
		{
			__constructor();
		}
	};
} // namespace dalvik::bytecode

