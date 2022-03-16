#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JCharArray;
class JDoubleArray;
class JFloatArray;
class JIntArray;
class JLongArray;
class JArray;
class JObjectArray;
class JShortArray;
class JBooleanArray;
class JClass;
class JObject;
class JString;
namespace java::lang
{
	class StringBuilder;
}

namespace java::util
{
	class Arrays : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Arrays(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Arrays(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject asList(JObjectArray arg0);
		static jint binarySearch(JByteArray arg0, jbyte arg1);
		static jint binarySearch(JCharArray arg0, jchar arg1);
		static jint binarySearch(JDoubleArray arg0, jdouble arg1);
		static jint binarySearch(JFloatArray arg0, jfloat arg1);
		static jint binarySearch(JIntArray arg0, jint arg1);
		static jint binarySearch(JLongArray arg0, jlong arg1);
		static jint binarySearch(JObjectArray arg0, JObject arg1);
		static jint binarySearch(JShortArray arg0, jshort arg1);
		static jint binarySearch(JObjectArray arg0, JObject arg1, JObject arg2);
		static jint binarySearch(JByteArray arg0, jint arg1, jint arg2, jbyte arg3);
		static jint binarySearch(JCharArray arg0, jint arg1, jint arg2, jchar arg3);
		static jint binarySearch(JDoubleArray arg0, jint arg1, jint arg2, jdouble arg3);
		static jint binarySearch(JFloatArray arg0, jint arg1, jint arg2, jfloat arg3);
		static jint binarySearch(JIntArray arg0, jint arg1, jint arg2, jint arg3);
		static jint binarySearch(JLongArray arg0, jint arg1, jint arg2, jlong arg3);
		static jint binarySearch(JObjectArray arg0, jint arg1, jint arg2, JObject arg3);
		static jint binarySearch(JShortArray arg0, jint arg1, jint arg2, jshort arg3);
		static jint binarySearch(JObjectArray arg0, jint arg1, jint arg2, JObject arg3, JObject arg4);
		static jint compare(JByteArray arg0, JByteArray arg1);
		static jint compare(JCharArray arg0, JCharArray arg1);
		static jint compare(JDoubleArray arg0, JDoubleArray arg1);
		static jint compare(JFloatArray arg0, JFloatArray arg1);
		static jint compare(JIntArray arg0, JIntArray arg1);
		static jint compare(JLongArray arg0, JLongArray arg1);
		static jint compare(JArray arg0, JArray arg1);
		static jint compare(JShortArray arg0, JShortArray arg1);
		static jint compare(JBooleanArray arg0, JBooleanArray arg1);
		static jint compare(JObjectArray arg0, JObjectArray arg1, JObject arg2);
		static jint compare(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4, jint arg5);
		static jint compare(JCharArray arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4, jint arg5);
		static jint compare(JDoubleArray arg0, jint arg1, jint arg2, JDoubleArray arg3, jint arg4, jint arg5);
		static jint compare(JFloatArray arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, jint arg5);
		static jint compare(JIntArray arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, jint arg5);
		static jint compare(JLongArray arg0, jint arg1, jint arg2, JLongArray arg3, jint arg4, jint arg5);
		static jint compare(JArray arg0, jint arg1, jint arg2, JArray arg3, jint arg4, jint arg5);
		static jint compare(JShortArray arg0, jint arg1, jint arg2, JShortArray arg3, jint arg4, jint arg5);
		static jint compare(JBooleanArray arg0, jint arg1, jint arg2, JBooleanArray arg3, jint arg4, jint arg5);
		static jint compare(JObjectArray arg0, jint arg1, jint arg2, JObjectArray arg3, jint arg4, jint arg5, JObject arg6);
		static jint compareUnsigned(JByteArray arg0, JByteArray arg1);
		static jint compareUnsigned(JIntArray arg0, JIntArray arg1);
		static jint compareUnsigned(JLongArray arg0, JLongArray arg1);
		static jint compareUnsigned(JShortArray arg0, JShortArray arg1);
		static jint compareUnsigned(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4, jint arg5);
		static jint compareUnsigned(JIntArray arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, jint arg5);
		static jint compareUnsigned(JLongArray arg0, jint arg1, jint arg2, JLongArray arg3, jint arg4, jint arg5);
		static jint compareUnsigned(JShortArray arg0, jint arg1, jint arg2, JShortArray arg3, jint arg4, jint arg5);
		static JByteArray copyOf(JByteArray arg0, jint arg1);
		static JCharArray copyOf(JCharArray arg0, jint arg1);
		static JDoubleArray copyOf(JDoubleArray arg0, jint arg1);
		static JFloatArray copyOf(JFloatArray arg0, jint arg1);
		static JIntArray copyOf(JIntArray arg0, jint arg1);
		static JLongArray copyOf(JLongArray arg0, jint arg1);
		static JObjectArray copyOf(JObjectArray arg0, jint arg1);
		static JObjectArray copyOf(JObjectArray arg0, jint arg1, JClass arg2);
		static JShortArray copyOf(JShortArray arg0, jint arg1);
		static JBooleanArray copyOf(JBooleanArray arg0, jint arg1);
		static JByteArray copyOfRange(JByteArray arg0, jint arg1, jint arg2);
		static JCharArray copyOfRange(JCharArray arg0, jint arg1, jint arg2);
		static JDoubleArray copyOfRange(JDoubleArray arg0, jint arg1, jint arg2);
		static JFloatArray copyOfRange(JFloatArray arg0, jint arg1, jint arg2);
		static JIntArray copyOfRange(JIntArray arg0, jint arg1, jint arg2);
		static JLongArray copyOfRange(JLongArray arg0, jint arg1, jint arg2);
		static JObjectArray copyOfRange(JObjectArray arg0, jint arg1, jint arg2);
		static JObjectArray copyOfRange(JObjectArray arg0, jint arg1, jint arg2, JClass arg3);
		static JShortArray copyOfRange(JShortArray arg0, jint arg1, jint arg2);
		static JBooleanArray copyOfRange(JBooleanArray arg0, jint arg1, jint arg2);
		static jboolean deepEquals(JObjectArray arg0, JObjectArray arg1);
		static jint deepHashCode(JObjectArray arg0);
		static JString deepToString(JObjectArray arg0);
		static jboolean equals(JByteArray arg0, JByteArray arg1);
		static jboolean equals(JCharArray arg0, JCharArray arg1);
		static jboolean equals(JDoubleArray arg0, JDoubleArray arg1);
		static jboolean equals(JFloatArray arg0, JFloatArray arg1);
		static jboolean equals(JIntArray arg0, JIntArray arg1);
		static jboolean equals(JLongArray arg0, JLongArray arg1);
		static jboolean equals(JObjectArray arg0, JObjectArray arg1);
		static jboolean equals(JShortArray arg0, JShortArray arg1);
		static jboolean equals(JBooleanArray arg0, JBooleanArray arg1);
		static jboolean equals(JObjectArray arg0, JObjectArray arg1, JObject arg2);
		static jboolean equals(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4, jint arg5);
		static jboolean equals(JCharArray arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4, jint arg5);
		static jboolean equals(JDoubleArray arg0, jint arg1, jint arg2, JDoubleArray arg3, jint arg4, jint arg5);
		static jboolean equals(JFloatArray arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, jint arg5);
		static jboolean equals(JIntArray arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, jint arg5);
		static jboolean equals(JLongArray arg0, jint arg1, jint arg2, JLongArray arg3, jint arg4, jint arg5);
		static jboolean equals(JObjectArray arg0, jint arg1, jint arg2, JObjectArray arg3, jint arg4, jint arg5);
		static jboolean equals(JShortArray arg0, jint arg1, jint arg2, JShortArray arg3, jint arg4, jint arg5);
		static jboolean equals(JBooleanArray arg0, jint arg1, jint arg2, JBooleanArray arg3, jint arg4, jint arg5);
		static jboolean equals(JObjectArray arg0, jint arg1, jint arg2, JObjectArray arg3, jint arg4, jint arg5, JObject arg6);
		static void fill(JByteArray arg0, jbyte arg1);
		static void fill(JCharArray arg0, jchar arg1);
		static void fill(JDoubleArray arg0, jdouble arg1);
		static void fill(JFloatArray arg0, jfloat arg1);
		static void fill(JIntArray arg0, jint arg1);
		static void fill(JLongArray arg0, jlong arg1);
		static void fill(JObjectArray arg0, JObject arg1);
		static void fill(JShortArray arg0, jshort arg1);
		static void fill(JBooleanArray arg0, jboolean arg1);
		static void fill(JByteArray arg0, jint arg1, jint arg2, jbyte arg3);
		static void fill(JCharArray arg0, jint arg1, jint arg2, jchar arg3);
		static void fill(JDoubleArray arg0, jint arg1, jint arg2, jdouble arg3);
		static void fill(JFloatArray arg0, jint arg1, jint arg2, jfloat arg3);
		static void fill(JIntArray arg0, jint arg1, jint arg2, jint arg3);
		static void fill(JLongArray arg0, jint arg1, jint arg2, jlong arg3);
		static void fill(JObjectArray arg0, jint arg1, jint arg2, JObject arg3);
		static void fill(JShortArray arg0, jint arg1, jint arg2, jshort arg3);
		static void fill(JBooleanArray arg0, jint arg1, jint arg2, jboolean arg3);
		static jint hashCode(JByteArray arg0);
		static jint hashCode(JCharArray arg0);
		static jint hashCode(JDoubleArray arg0);
		static jint hashCode(JFloatArray arg0);
		static jint hashCode(JIntArray arg0);
		static jint hashCode(JLongArray arg0);
		static jint hashCode(JObjectArray arg0);
		static jint hashCode(JShortArray arg0);
		static jint hashCode(JBooleanArray arg0);
		static jint mismatch(JByteArray arg0, JByteArray arg1);
		static jint mismatch(JCharArray arg0, JCharArray arg1);
		static jint mismatch(JDoubleArray arg0, JDoubleArray arg1);
		static jint mismatch(JFloatArray arg0, JFloatArray arg1);
		static jint mismatch(JIntArray arg0, JIntArray arg1);
		static jint mismatch(JLongArray arg0, JLongArray arg1);
		static jint mismatch(JObjectArray arg0, JObjectArray arg1);
		static jint mismatch(JShortArray arg0, JShortArray arg1);
		static jint mismatch(JBooleanArray arg0, JBooleanArray arg1);
		static jint mismatch(JObjectArray arg0, JObjectArray arg1, JObject arg2);
		static jint mismatch(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4, jint arg5);
		static jint mismatch(JCharArray arg0, jint arg1, jint arg2, JCharArray arg3, jint arg4, jint arg5);
		static jint mismatch(JDoubleArray arg0, jint arg1, jint arg2, JDoubleArray arg3, jint arg4, jint arg5);
		static jint mismatch(JFloatArray arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4, jint arg5);
		static jint mismatch(JIntArray arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, jint arg5);
		static jint mismatch(JLongArray arg0, jint arg1, jint arg2, JLongArray arg3, jint arg4, jint arg5);
		static jint mismatch(JObjectArray arg0, jint arg1, jint arg2, JObjectArray arg3, jint arg4, jint arg5);
		static jint mismatch(JShortArray arg0, jint arg1, jint arg2, JShortArray arg3, jint arg4, jint arg5);
		static jint mismatch(JBooleanArray arg0, jint arg1, jint arg2, JBooleanArray arg3, jint arg4, jint arg5);
		static jint mismatch(JObjectArray arg0, jint arg1, jint arg2, JObjectArray arg3, jint arg4, jint arg5, JObject arg6);
		static void parallelPrefix(JDoubleArray arg0, JObject arg1);
		static void parallelPrefix(JIntArray arg0, JObject arg1);
		static void parallelPrefix(JLongArray arg0, JObject arg1);
		static void parallelPrefix(JObjectArray arg0, JObject arg1);
		static void parallelPrefix(JDoubleArray arg0, jint arg1, jint arg2, JObject arg3);
		static void parallelPrefix(JIntArray arg0, jint arg1, jint arg2, JObject arg3);
		static void parallelPrefix(JLongArray arg0, jint arg1, jint arg2, JObject arg3);
		static void parallelPrefix(JObjectArray arg0, jint arg1, jint arg2, JObject arg3);
		static void parallelSetAll(JDoubleArray arg0, JObject arg1);
		static void parallelSetAll(JIntArray arg0, JObject arg1);
		static void parallelSetAll(JLongArray arg0, JObject arg1);
		static void parallelSetAll(JObjectArray arg0, JObject arg1);
		static void parallelSort(JByteArray arg0);
		static void parallelSort(JCharArray arg0);
		static void parallelSort(JDoubleArray arg0);
		static void parallelSort(JFloatArray arg0);
		static void parallelSort(JIntArray arg0);
		static void parallelSort(JLongArray arg0);
		static void parallelSort(JArray arg0);
		static void parallelSort(JShortArray arg0);
		static void parallelSort(JObjectArray arg0, JObject arg1);
		static void parallelSort(JByteArray arg0, jint arg1, jint arg2);
		static void parallelSort(JCharArray arg0, jint arg1, jint arg2);
		static void parallelSort(JDoubleArray arg0, jint arg1, jint arg2);
		static void parallelSort(JFloatArray arg0, jint arg1, jint arg2);
		static void parallelSort(JIntArray arg0, jint arg1, jint arg2);
		static void parallelSort(JLongArray arg0, jint arg1, jint arg2);
		static void parallelSort(JArray arg0, jint arg1, jint arg2);
		static void parallelSort(JShortArray arg0, jint arg1, jint arg2);
		static void parallelSort(JObjectArray arg0, jint arg1, jint arg2, JObject arg3);
		static void setAll(JDoubleArray arg0, JObject arg1);
		static void setAll(JIntArray arg0, JObject arg1);
		static void setAll(JLongArray arg0, JObject arg1);
		static void setAll(JObjectArray arg0, JObject arg1);
		static void sort(JByteArray arg0);
		static void sort(JCharArray arg0);
		static void sort(JDoubleArray arg0);
		static void sort(JFloatArray arg0);
		static void sort(JIntArray arg0);
		static void sort(JLongArray arg0);
		static void sort(JObjectArray arg0);
		static void sort(JShortArray arg0);
		static void sort(JObjectArray arg0, JObject arg1);
		static void sort(JByteArray arg0, jint arg1, jint arg2);
		static void sort(JCharArray arg0, jint arg1, jint arg2);
		static void sort(JDoubleArray arg0, jint arg1, jint arg2);
		static void sort(JFloatArray arg0, jint arg1, jint arg2);
		static void sort(JIntArray arg0, jint arg1, jint arg2);
		static void sort(JLongArray arg0, jint arg1, jint arg2);
		static void sort(JObjectArray arg0, jint arg1, jint arg2);
		static void sort(JShortArray arg0, jint arg1, jint arg2);
		static void sort(JObjectArray arg0, jint arg1, jint arg2, JObject arg3);
		static JObject spliterator(JObjectArray arg0);
		static JObject spliterator(JObjectArray arg0, jint arg1, jint arg2);
		static JObject spliterator(JDoubleArray arg0);
		static JObject spliterator(JDoubleArray arg0, jint arg1, jint arg2);
		static JObject spliterator(JIntArray arg0);
		static JObject spliterator(JIntArray arg0, jint arg1, jint arg2);
		static JObject spliterator(JLongArray arg0);
		static JObject spliterator(JLongArray arg0, jint arg1, jint arg2);
		static JObject stream(JDoubleArray arg0);
		static JObject stream(JDoubleArray arg0, jint arg1, jint arg2);
		static JObject stream(JIntArray arg0);
		static JObject stream(JIntArray arg0, jint arg1, jint arg2);
		static JObject stream(JLongArray arg0);
		static JObject stream(JLongArray arg0, jint arg1, jint arg2);
		static JObject stream(JObjectArray arg0);
		static JObject stream(JObjectArray arg0, jint arg1, jint arg2);
		static JString toString(JByteArray arg0);
		static JString toString(JCharArray arg0);
		static JString toString(JDoubleArray arg0);
		static JString toString(JFloatArray arg0);
		static JString toString(JIntArray arg0);
		static JString toString(JLongArray arg0);
		static JString toString(JObjectArray arg0);
		static JString toString(JShortArray arg0);
		static JString toString(JBooleanArray arg0);
	};
} // namespace java::util

