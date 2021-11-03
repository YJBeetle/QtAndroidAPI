#pragma once

#include "../../JObject.hpp"

class JDoubleArray;
class JIntArray;
class JLongArray;
class JObjectArray;

namespace java::util
{
	class Spliterators : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Spliterators(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Spliterators(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject emptyDoubleSpliterator();
		static JObject emptyIntSpliterator();
		static JObject emptyLongSpliterator();
		static JObject emptySpliterator();
		static JObject iterator(JObject arg0);
		static JObject spliterator(JObjectArray arg0, jint arg1);
		static JObject spliterator(JObject arg0, jint arg1);
		static JObject spliterator(JObject arg0, jlong arg1, jint arg2);
		static JObject spliterator(JObjectArray arg0, jint arg1, jint arg2, jint arg3);
		static JObject spliterator(JDoubleArray arg0, jint arg1);
		static JObject spliterator(JDoubleArray arg0, jint arg1, jint arg2, jint arg3);
		static JObject spliterator(JIntArray arg0, jint arg1);
		static JObject spliterator(JIntArray arg0, jint arg1, jint arg2, jint arg3);
		static JObject spliterator(JLongArray arg0, jint arg1);
		static JObject spliterator(JLongArray arg0, jint arg1, jint arg2, jint arg3);
		static JObject spliteratorUnknownSize(JObject arg0, jint arg1);
	};
} // namespace java::util

