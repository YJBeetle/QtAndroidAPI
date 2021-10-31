#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::util::stream
{
	class StreamSupport : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamSupport(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StreamSupport(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass doubleStream(__JniBaseClass arg0, jboolean arg1);
		static __JniBaseClass doubleStream(__JniBaseClass arg0, jint arg1, jboolean arg2);
		static __JniBaseClass intStream(__JniBaseClass arg0, jboolean arg1);
		static __JniBaseClass intStream(__JniBaseClass arg0, jint arg1, jboolean arg2);
		static __JniBaseClass longStream(__JniBaseClass arg0, jboolean arg1);
		static __JniBaseClass longStream(__JniBaseClass arg0, jint arg1, jboolean arg2);
		static __JniBaseClass stream(__JniBaseClass arg0, jboolean arg1);
		static __JniBaseClass stream(__JniBaseClass arg0, jint arg1, jboolean arg2);
	};
} // namespace java::util::stream

