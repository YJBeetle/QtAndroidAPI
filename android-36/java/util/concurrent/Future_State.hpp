#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./Future_State.def.hpp"

namespace java::util::concurrent
{
	// Fields
	inline java::util::concurrent::Future_State Future_State::CANCELLED()
	{
		return getStaticObjectField(
			"java.util.concurrent.Future$State",
			"CANCELLED",
			"Ljava/util/concurrent/Future$State;"
		);
	}
	inline java::util::concurrent::Future_State Future_State::FAILED()
	{
		return getStaticObjectField(
			"java.util.concurrent.Future$State",
			"FAILED",
			"Ljava/util/concurrent/Future$State;"
		);
	}
	inline java::util::concurrent::Future_State Future_State::RUNNING()
	{
		return getStaticObjectField(
			"java.util.concurrent.Future$State",
			"RUNNING",
			"Ljava/util/concurrent/Future$State;"
		);
	}
	inline java::util::concurrent::Future_State Future_State::SUCCESS()
	{
		return getStaticObjectField(
			"java.util.concurrent.Future$State",
			"SUCCESS",
			"Ljava/util/concurrent/Future$State;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::util::concurrent::Future_State Future_State::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Future$State",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/concurrent/Future$State;",
			arg0.object<jstring>()
		);
	}
	inline JArray Future_State::values()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Future$State",
			"values",
			"()[Ljava/util/concurrent/Future$State;"
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "../../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
