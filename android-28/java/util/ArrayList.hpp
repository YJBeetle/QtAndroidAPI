#pragma once

#include "../../JObject.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractList.hpp"

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
	class ArrayList : public java::util::AbstractList
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArrayList(const char *className, const char *sig, Ts...agv) : java::util::AbstractList(className, sig, std::forward<Ts>(agv)...) {}
		ArrayList(QJniObject obj);
		
		// Constructors
		ArrayList();
		ArrayList(jint arg0);
		ArrayList(JObject arg0);
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(JObject arg0);
		jboolean addAll(jint arg0, JObject arg1);
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		void ensureCapacity(jint arg0);
		jboolean equals(jobject arg0);
		void forEach(JObject arg0);
		jobject get(jint arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		jboolean isEmpty();
		JObject iterator();
		jint lastIndexOf(jobject arg0);
		JObject listIterator();
		JObject listIterator(jint arg0);
		jboolean remove(jobject arg0);
		jobject remove(jint arg0);
		jboolean removeAll(JObject arg0);
		jboolean removeIf(JObject arg0);
		void replaceAll(JObject arg0);
		jboolean retainAll(JObject arg0);
		jobject set(jint arg0, jobject arg1);
		jint size();
		void sort(JObject arg0);
		JObject spliterator();
		JObject subList(jint arg0, jint arg1);
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		void trimToSize();
	};
} // namespace java::util

