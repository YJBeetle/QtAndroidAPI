#pragma once

#include "../../JObject.hpp"
#include "./AbstractCollection.hpp"


namespace java::util
{
	class AbstractSet : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSet(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean removeAll(JObject arg0);
	};
} // namespace java::util

