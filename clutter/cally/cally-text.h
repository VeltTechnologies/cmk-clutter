/* CALLY - The Clutter Accessibility Implementation Library
 *
 * Copyright (C) 2009 Igalia, S.L.
 *
 * Author: Alejandro Piñeiro Iglesias <apinheiro@igalia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __CALLY_TEXT_H__
#define __CALLY_TEXT_H__

#include "cally-actor.h"

G_BEGIN_DECLS

#define CALLY_TYPE_TEXT           (cally_text_get_type ())
#define CALLY_TEXT(obj)           (G_TYPE_CHECK_INSTANCE_CAST ((obj), CALLY_TYPE_TEXT, CallyText))
#define CALLY_TEXT_CLASS(klass)   (G_TYPE_CHECK_CLASS_CAST ((klass), CALLY_TYPE_TEXT, CallyTextClass))
#define CALLY_IS_TEXT(obj)        (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CALLY_TYPE_TEXT))
#define CALLY_IS_TEXT_CLASS(klass)(G_TYPE_CHECK_CLASS_TYPE ((klass), CALLY_TYPE_TEXT))
#define CALLY_TEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CALLY_TYPE_TEXT, CallyTextClass))


typedef struct _CallyText         CallyText;
typedef struct _CallyTextClass    CallyTextClass;
typedef struct _CallyTextPrivate  CallyTextPrivate;

struct _CallyText
{
  CallyActor parent;

  /* < private > */
  CallyTextPrivate *priv;
};

struct _CallyTextClass
{
  CallyActorClass parent_class;

  /* padding for future expansion */
  gpointer _padding_dummy[30];
};

GType      cally_text_get_type (void);
AtkObject* cally_text_new      (ClutterActor *actor);

G_END_DECLS

#endif /* __CALLY_TEXT_H__ */
