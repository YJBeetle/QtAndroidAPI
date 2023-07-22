#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./VarHandle_AccessMode.def.hpp"

namespace java::lang::invoke
{
	// Fields
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::COMPARE_AND_EXCHANGE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"COMPARE_AND_EXCHANGE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::COMPARE_AND_EXCHANGE_ACQUIRE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"COMPARE_AND_EXCHANGE_ACQUIRE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::COMPARE_AND_EXCHANGE_RELEASE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"COMPARE_AND_EXCHANGE_RELEASE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::COMPARE_AND_SET()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"COMPARE_AND_SET",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_ACQUIRE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_ACQUIRE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_ADD()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_ADD",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_ADD_ACQUIRE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_ADD_ACQUIRE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_ADD_RELEASE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_ADD_RELEASE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_BITWISE_AND()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_BITWISE_AND",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_BITWISE_AND_ACQUIRE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_BITWISE_AND_ACQUIRE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_BITWISE_AND_RELEASE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_BITWISE_AND_RELEASE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_BITWISE_OR()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_BITWISE_OR",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_BITWISE_OR_ACQUIRE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_BITWISE_OR_ACQUIRE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_BITWISE_OR_RELEASE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_BITWISE_OR_RELEASE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_BITWISE_XOR()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_BITWISE_XOR",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_BITWISE_XOR_ACQUIRE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_BITWISE_XOR_ACQUIRE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_BITWISE_XOR_RELEASE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_BITWISE_XOR_RELEASE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_SET()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_SET",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_SET_ACQUIRE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_SET_ACQUIRE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_AND_SET_RELEASE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_AND_SET_RELEASE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_OPAQUE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_OPAQUE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::GET_VOLATILE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"GET_VOLATILE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::SET()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"SET",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::SET_OPAQUE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"SET_OPAQUE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::SET_RELEASE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"SET_RELEASE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::SET_VOLATILE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"SET_VOLATILE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::WEAK_COMPARE_AND_SET()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"WEAK_COMPARE_AND_SET",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::WEAK_COMPARE_AND_SET_ACQUIRE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"WEAK_COMPARE_AND_SET_ACQUIRE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::WEAK_COMPARE_AND_SET_PLAIN()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"WEAK_COMPARE_AND_SET_PLAIN",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::WEAK_COMPARE_AND_SET_RELEASE()
	{
		return getStaticObjectField(
			"java.lang.invoke.VarHandle$AccessMode",
			"WEAK_COMPARE_AND_SET_RELEASE",
			"Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::valueFromMethodName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.VarHandle$AccessMode",
			"valueFromMethodName",
			"(Ljava/lang/String;)Ljava/lang/invoke/VarHandle$AccessMode;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::invoke::VarHandle_AccessMode VarHandle_AccessMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.VarHandle$AccessMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/invoke/VarHandle$AccessMode;",
			arg0.object<jstring>()
		);
	}
	inline JArray VarHandle_AccessMode::values()
	{
		return callStaticObjectMethod(
			"java.lang.invoke.VarHandle$AccessMode",
			"values",
			"()[Ljava/lang/invoke/VarHandle$AccessMode;"
		);
	}
	inline JString VarHandle_AccessMode::methodName() const
	{
		return callObjectMethod(
			"methodName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::invoke

// Base class headers
#include "../Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::invoke;
#endif
