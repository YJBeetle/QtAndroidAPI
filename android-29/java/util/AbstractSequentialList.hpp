#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractList.hpp"


namespace java::util
{
	class AbstractSequentialList : public java::util::AbstractList
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractSequentialList(const char *className, const char *sig, Ts...agv) : java::util::AbstractList(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSequentialList(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void add(jint arg0, jobject arg1);
		jboolean addAll(jint arg0, __JniBaseClass arg1);
		jobject get(jint arg0);
		__JniBaseClass iterator();
		__JniBaseClass listIterator(jint arg0);
		jobject remove(jint arg0);
		jobject set(jint arg0, jobject arg1);
	};
} // namespace java::util

