#pragma once

#include "../../../JObject.hpp"
#include "./Cleaner.def.hpp"

namespace java::lang::ref
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::ref::Cleaner Cleaner::create()
	{
		return callStaticObjectMethod(
			"java.lang.ref.Cleaner",
			"create",
			"()Ljava/lang/ref/Cleaner;"
		);
	}
	inline java::lang::ref::Cleaner Cleaner::create(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ref.Cleaner",
			"create",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/lang/ref/Cleaner;",
			arg0.object()
		);
	}
	inline JObject Cleaner::register_(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"register",
			"(Ljava/lang/Object;Ljava/lang/Runnable;)Ljava/lang/ref/Cleaner$Cleanable;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
} // namespace java::lang::ref

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::ref;
#endif
