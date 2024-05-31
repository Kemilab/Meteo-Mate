// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: Lancefy_Display

#include "../ui.h"

void ui_mainScreen_screen_init(void)
{
    ui_mainScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_mainScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image7 = lv_img_create(ui_mainScreen);
    lv_img_set_src(ui_Image7, &ui_img_banner_png);
    lv_obj_set_width(ui_Image7, lv_pct(100));
    lv_obj_set_height(ui_Image7, lv_pct(100));
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image7, 450);

    ui_Image13 = lv_img_create(ui_mainScreen);
    lv_img_set_src(ui_Image13, &ui_img_1184185672);
    lv_obj_set_width(ui_Image13, LV_SIZE_CONTENT);   /// 320
    lv_obj_set_height(ui_Image13, LV_SIZE_CONTENT);    /// 44
    lv_obj_set_x(ui_Image13, 0);
    lv_obj_set_y(ui_Image13, -88);
    lv_obj_set_align(ui_Image13, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image13, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image13, 200);

    ui_startButton = lv_btn_create(ui_mainScreen);
    lv_obj_set_width(ui_startButton, lv_pct(30));
    lv_obj_set_height(ui_startButton, lv_pct(15));
    lv_obj_set_x(ui_startButton, -1);
    lv_obj_set_y(ui_startButton, 26);
    lv_obj_set_align(ui_startButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_startButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_startButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_startButton, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_startButton, lv_color_hex(0xBE0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_startButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_startButton, lv_color_hex(0xB52121), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_startButton, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_butonStatus = lv_label_create(ui_startButton);
    lv_obj_set_width(ui_butonStatus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_butonStatus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_butonStatus, 0);
    lv_obj_set_y(ui_butonStatus, -1);
    lv_obj_set_align(ui_butonStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_butonStatus, "Start");
    lv_obj_set_style_text_color(ui_butonStatus, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_butonStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_butonStatus, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_butonStatus, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_mainScreen);
    lv_img_set_src(ui_Image1, &ui_img_1962740327);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 320
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 44
    lv_obj_set_x(ui_Image1, 0);
    lv_obj_set_y(ui_Image1, -94);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image1, 200);

    lv_obj_add_event_cb(ui_startButton, ui_event_startButton, LV_EVENT_ALL, NULL);

}
