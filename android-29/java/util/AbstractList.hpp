#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"


namespace java::util
{
	class AbstractList : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractList(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		AbstractList(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(jint arg0, __JniBaseClass arg1);
		void clear();
		jboolean equals(jobject arg0);
		jobject get(jint arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		__JniBaseClass iterator();
		jint lastIndexOf(jobject arg0);
		__JniBaseClass listIterator();
		__JniBaseClass listIterator(jint arg0);
		jobject remove(jint arg0);
		jobject set(jint arg0, jobject arg1);
		__JniBaseClass subList(jint arg0, jint arg1);
	};
} // namespace java::util

