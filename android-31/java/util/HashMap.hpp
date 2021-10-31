#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractMap.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

namespace java::util
{
	class HashMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HashMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		HashMap(QJniObject obj);
		
		// Constructors
		HashMap();
		HashMap(jint arg0);
		HashMap(__JniBaseClass arg0);
		HashMap(jint arg0, jfloat arg1);
		
		// Methods
		void clear();
		jobject clone();
		jobject compute(jobject arg0, __JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __JniBaseClass arg1);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		__JniBaseClass entrySet();
		void forEach(__JniBaseClass arg0);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		jboolean isEmpty();
		__JniBaseClass keySet();
		jobject merge(jobject arg0, jobject arg1, __JniBaseClass arg2);
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__JniBaseClass arg0);
		jint size();
		__JniBaseClass values();
	};
} // namespace java::util

